//
//  ViewController.m
//  function
//
//  Created by zhangzexin on 16/6/25.
//  Copyright © 2016年 zhangzexin. All rights reserved.
//

#import "ViewController.h"
#import "AZCommonUtils.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
//    
//    NSLog(@"首字母 ===> %@",[AZCommonUtils firstCharacterWithString:@""]);
//    
    NSArray *arr = @[@"guangzhou",@"shanghai",@"北京",@"西安"];
    NSLog(@"fsafasfsad  ===> %@",[AZCommonUtils dictionaryOrderByCharacterWithOriginalArray:arr]);
//    NSLog(@"shijian    ===> %@",[AZCommonUtils currentDateWithFormate:@"yyyy年MM月dd日 hh时mm分ss秒"]);
//    NSLog(@"fsfsafsaf  ===> %@",[AZCommonUtils ])
    
//    NSLog(@"\n\nresult: ");
    NSLog(@"\nfasdfasdf\nresult: %@",[AZCommonUtils timeIntervalFromLastTime:@"2015年12月8日 15:50"
                                                    lastTimeFormate:@"yyyy年MM月dd日 HH:mm"
                                                      toCurrentTime:@"2015/12/08 16:12" currentTimeFormat:@"yyyy/MM/dd HH:mm"]);
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
//    CGFloat
}



@end
