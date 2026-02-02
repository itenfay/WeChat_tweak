//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface WCFinderFeedFlowViewTipsConfig : NSObject
{
    unsigned long long _styleFlag;
    UIImage *_iconImage;
    NSString *_tipsText;
    NSString *_endText;
    NSString *_endBtnText;
}

+ (unsigned long long)convertFeedFlowViewStateToEmptyTipsViewState:(unsigned long long)arg1;
+ (id)defaultConfigOfFooterViewInState:(unsigned long long)arg1;
+ (id)defaultConfigOfEmptyTipsViewInState:(unsigned long long)arg1;
+ (id)defaultConfigOfHeaderViewInState:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *endBtnText; // @synthesize endBtnText=_endBtnText;
@property(retain, nonatomic) NSString *endText; // @synthesize endText=_endText;
@property(retain, nonatomic) NSString *tipsText; // @synthesize tipsText=_tipsText;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(nonatomic) unsigned long long styleFlag; // @synthesize styleFlag=_styleFlag;
- (id)initWithTipsType:(unsigned long long)arg1 inState:(unsigned long long)arg2;

@end

