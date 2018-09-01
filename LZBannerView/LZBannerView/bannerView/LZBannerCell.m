//
//  LZBannerCell.m
//  LZBanner
//
//  Created by liuzhixiong on 2018/8/31.
//  Copyright © 2018年 liuzhixiong. All rights reserved.
//

#import "LZBannerCell.h"

@implementation LZBannerCell


-(instancetype)initWithFrame:(CGRect)frame{
    if (self = [super initWithFrame:frame]) {
        [self createUI];
    }
    return self ;
}

-(void)createUI{
    self.bannerImageView = [[UIImageView alloc]init];
    [self.bannerImageView setContentMode:UIViewContentModeScaleAspectFill];
    [self.bannerImageView setUserInteractionEnabled:YES];
    [self.bannerImageView.layer setCornerRadius:3];
    [self.bannerImageView.layer setMasksToBounds:YES];
    [self.contentView addSubview:self.bannerImageView];
    [self.bannerImageView setFrame:self.bounds];
}

- (void)setupBannerModel:(LZBannerModel*)model {
    [self.bannerImageView setImage:[UIImage imageWithContentsOfFile:model.filePath]];
}


@end
