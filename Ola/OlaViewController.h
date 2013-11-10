//
//  OlaViewController.h
//  Ola
//
//  Created by Andy Brown on 29/12/2012.
//  Copyright (c) 2012 Andy Brown. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface OlaViewController : UIViewController
- (IBAction)pushMe:(id)sender;
@property (weak, nonatomic) IBOutlet UILabel *helloWorld;

@end
