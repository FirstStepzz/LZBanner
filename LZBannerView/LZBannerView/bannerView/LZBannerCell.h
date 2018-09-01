//
//  LZBannerCell.h
//  LZBanner
//
//  Created by liuzhixiong on 2018/8/31.
//  Copyright © 2018年 liuzhixiong. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LZBannerModel.h"

@interface LZBannerCell : UICollectionViewCell

@property (nonatomic,strong) UIImageView *bannerImageView;

- (void)setupBannerModel:(LZBannerModel*)model;


@end
