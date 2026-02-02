//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray;
@protocol WCMktCardItemViewDelegate;

@interface WCMktCardItemView : UIView
{
    id <WCMktCardItemViewDelegate> _delegate;
    NSArray *_couponList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *couponList; // @synthesize couponList=_couponList;
@property(nonatomic) __weak id <WCMktCardItemViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)cardBtnClick:(id)arg1;
- (void)handleTagBtnClick:(id)arg1;
- (void)clickGeneralCardTagListBtn:(id)arg1;
- (void)clickGeneralCouponTagListBtn:(id)arg1;
- (id)genTagButtonWithTagData:(id)arg1 isCard:(_Bool)arg2;
- (id)genGeneralCardView:(id)arg1 index:(long long)arg2;
- (id)genGeneralCouponsView:(id)arg1 index:(long long)arg2;
- (void)setupContentView:(unsigned int)arg1;
- (void)updateCardItemViewWithCouponListData:(id)arg1 displayCount:(unsigned int)arg2;

@end

