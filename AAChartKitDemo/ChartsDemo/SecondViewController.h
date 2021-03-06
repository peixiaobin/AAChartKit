//
//  ViewController.h
//  AAChartKit
//
//  Created by An An on 17/3/13.
//  Copyright © 2017年 An An. All rights reserved.
//  source code ----*** https://github.com/AAChartModel/AAChartKit ***--- source code
//

/*
 
 * -------------------------------------------------------------------------------
 *
 * ❀❀❀   WARM TIPS!!!   ❀❀❀
 *
 * Please contact me on GitHub,if there are any problems encountered in use.
 * GitHub Issues : https://github.com/AAChartModel/AAChartKit/issues
 * -------------------------------------------------------------------------------
 * And if you want to contribute for this project, please contact me as well
 * GitHub        : https://github.com/AAChartModel
 * StackOverflow : https://stackoverflow.com/users/7842508/codeforu
 * JianShu       : http://www.jianshu.com/u/f1e6753d4254
 * SegmentFault  : https://segmentfault.com/u/huanghunbieguan
 *
 * -------------------------------------------------------------------------------
 
 */

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger,SecondeViewControllerChartType) {
    SecondeViewControllerChartTypeColumn =0,
    SecondeViewControllerChartTypeBar,
    SecondeViewControllerChartTypeArea,
    SecondeViewControllerChartTypeAreaspline,
    SecondeViewControllerChartTypeLine,
    SecondeViewControllerChartTypeSpline,
    SecondeViewControllerChartTypeStepLine,
    SecondeViewControllerChartTypeStepArea,
    SecondeViewControllerChartTypeScatter,
};

@interface SecondViewController : UIViewController

@property (nonatomic, assign) SecondeViewControllerChartType chartType;
@property (nonatomic, copy  ) NSString  *receivedChartType;

@end

