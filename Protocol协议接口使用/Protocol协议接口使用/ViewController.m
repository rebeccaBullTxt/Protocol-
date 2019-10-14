//
//  ViewController.m
//  Protocol协议接口使用
//
//  Created by 刘渊 on 2019/9/28.
//  Copyright © 2019 刘渊. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()<SportProtocol,DemoDelegate>

@end
@implementation ViewController
@synthesize sportType=_sportType;
@synthesize nameStr = _nameStr;

//https://www.jianshu.com/p/2c67eebfaa3d
- (void)viewDidLoad {
    [super viewDidLoad];
    self.sportType = @"124";
    self.nameStr = @"LY";
    [self test];
}

- (void)test{
    NSLog(@"%@",_sportType);
    NSLog(@"%@",_nameStr);
}




@end
