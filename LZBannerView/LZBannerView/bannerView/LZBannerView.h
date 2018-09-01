//
//  LZBannerView.h
//  LZBanner
//
//  Created by liuzhixiong on 2018/8/31.
//  Copyright © 2018年 liuzhixiong. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LZBannerModel.h"

@class LZBannerView;

@protocol LZBannerViewDelegate <NSObject>

-(void)lzBannerView:(LZBannerView *)bannerView didSelectedItem:(NSInteger)index;

@end





@interface LZBannerView : UIView

@property (nonatomic,weak) id <LZBannerViewDelegate>delegate;

-(instancetype)initWithFrame:(CGRect)frame bannerImgWidth:(CGFloat)width bannerImgHeight:(CGFloat)height leftRightSpace:(CGFloat)space itemSpace:(CGFloat)itemSpace;

- (void)setupBannerData:(NSArray *)models;

@end
