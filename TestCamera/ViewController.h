//
//  ViewController.h
//  TestCamera
//
//  Created by Forrest Shi on 1/10/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface ViewController : UIViewController <AVCaptureVideoDataOutputSampleBufferDelegate>{
    
@private
    CALayer *customLayer;
}

@property (nonatomic,strong) CALayer *customLayer;
@property (nonatomic,strong) AVCaptureSession *captureSession;

@end
