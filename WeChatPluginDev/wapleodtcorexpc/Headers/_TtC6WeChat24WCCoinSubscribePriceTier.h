//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;
@protocol _TtP6WeChat32WCCoinSubscribePriceTierDelegate_;

@interface _TtC6WeChat24WCCoinSubscribePriceTier : NSObject
{
    MISSING_TYPE *title;
    MISSING_TYPE *price;
    MISSING_TYPE *type;
    MISSING_TYPE *tierDesc;
    MISSING_TYPE *bottomDesc;
    MISSING_TYPE *confirmButtonWording;
    MISSING_TYPE *delegate;
    MISSING_TYPE *showDiscountTitle;
    MISSING_TYPE *originPrice;
    MISSING_TYPE *userInfo;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithTitle:(id)arg1 price:(unsigned int)arg2 type:(long long)arg3 delegate:(id)arg4 bottomDesc:(id)arg5;
@property(nonatomic, retain) NSObject *userInfo; // @synthesize userInfo;
@property(nonatomic) unsigned int originPrice; // @synthesize originPrice;
@property(nonatomic) _Bool showDiscountTitle; // @synthesize showDiscountTitle;
@property(nonatomic) __weak id <_TtP6WeChat32WCCoinSubscribePriceTierDelegate_> delegate; // @synthesize delegate;
@property(nonatomic, copy) NSString *confirmButtonWording;
@property(nonatomic, readonly) NSString *bottomDesc;
@property(nonatomic, copy) NSString *tierDesc;
@property(nonatomic, readonly) long long type; // @synthesize type;
@property(nonatomic, readonly) unsigned int price; // @synthesize price;
@property(nonatomic, readonly) NSString *title;

@end

