#!/usr/bin/env/groovy

//testing with example pipleline
//from:https://www.jenkins.io/doc/pipeline/tour/running-multiple-steps/
pipeline {
    agent any
    stages {
        stage('Build') {
            steps {
                sh 'echo "Hello World"'
                sh '''
                    echo "Multiline shell steps works too"
                    ls -lah
                '''
            }
        }
    }
}
