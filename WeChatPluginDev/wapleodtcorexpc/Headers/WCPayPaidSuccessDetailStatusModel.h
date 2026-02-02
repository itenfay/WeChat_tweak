//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayPaidSuccessDetailStatusModel : NSObject
{
    NSString *_title;
    NSString *_detail;
    NSString *_titleColor;
    NSString *_detailColor;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *detailColor; // @synthesize detailColor=_detailColor;
@property(copy, nonatomic) NSString *titleColor; // @synthesize titleColor=_titleColor;
@property(copy, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;

@end

