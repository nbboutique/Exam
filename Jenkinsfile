pipeline {
        options {timestamps()}

        agent none
        stages {
            stage('Check scm'){
                agent any
                steps{
                    checkout scm
                }
            }
            stage('Build'){
                steps{
                    echo "Building ...${BUILD_NUMBER}"
                    echo "Build compleated"
                }
            }
            stage('Test'){
                agent{docker {image 'alpine'
                        args '-u=\"root\"'
                        }
                    }
                steps{
					sh "cd build"
   					sh "cmake -G main"
				}
				post{
					success{
						echo "Application compleated"
					}
					failure{
						echo "Smth wrong"
					}
				}
			}
		}

	}