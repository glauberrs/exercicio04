//
//  FlipsideViewController.h
//  exercicio04
//
//  Created by Jackson F. de A. Mafra on 10/07/2014.
//  Copyright (c) 2014 Jackson F. de A. Mafra. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FlipsideViewController;

@protocol FlipsideViewControllerDelegate
- (void)flipsideViewControllerDidFinish:(FlipsideViewController *)controller;
@end

@interface FlipsideViewController : UIViewController

@property (weak, nonatomic) id <FlipsideViewControllerDelegate> delegate;

- (IBAction)done:(id)sender;

@end
