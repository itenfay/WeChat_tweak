//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSString, UIImageView;

@interface _TtC6WeChat30WCCoinSubscribeMemberParameter : NSObject
{
    MISSING_TYPE *title;
    MISSING_TYPE *subTitle;
    MISSING_TYPE *priceTiers;
    MISSING_TYPE *protocolWording;
    MISSING_TYPE *tips;
    MISSING_TYPE *topIcon;
    MISSING_TYPE *sessionId;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithTitle:(id)arg1 priceTiers:(id)arg2 protocolWording:(id)arg3 tips:(id)arg4;
@property(nonatomic, copy) NSString *sessionId;
@property(nonatomic, retain) UIImageView *topIcon; // @synthesize topIcon;
@property(nonatomic, readonly) NSArray *tips;
@property(nonatomic, readonly) NSString *protocolWording;
@property(nonatomic, readonly) NSArray *priceTiers;
@property(nonatomic, copy) NSString *subTitle;
@property(nonatomic, readonly) NSString *title;

@end

