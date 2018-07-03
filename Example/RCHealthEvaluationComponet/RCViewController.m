//
//  RCViewController.m
//  RCHealthEvaluationComponet
//
//  Created by CoderTWWu on 07/02/2018.
//  Copyright (c) 2018 CoderTWWu. All rights reserved.
//

#import "RCViewController.h"
#import <RCHealthEvaluationComponet/RCHealthEvaluationListController.h>

@interface RCViewController ()

@end

@implementation RCViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event {
    
    RCHealthEvaluationListController *vc = [[RCHealthEvaluationListController alloc] init];
    [self.navigationController pushViewController:vc animated:YES];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
