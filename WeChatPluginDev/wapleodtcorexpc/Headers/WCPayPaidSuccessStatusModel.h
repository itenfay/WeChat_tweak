//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayPaidSuccessStatusModel : NSObject
{
    NSString *_firstTitle;
    NSString *_secondTitle;
    NSString *_secondDetail;
    NSString *_thirdTitle;
    NSString *_thirdDetail;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *thirdDetail; // @synthesize thirdDetail=_thirdDetail;
@property(copy, nonatomic) NSString *thirdTitle; // @synthesize thirdTitle=_thirdTitle;
@property(copy, nonatomic) NSString *secondDetail; // @synthesize secondDetail=_secondDetail;
@property(copy, nonatomic) NSString *secondTitle; // @synthesize secondTitle=_secondTitle;
@property(copy, nonatomic) NSString *firstTitle; // @synthesize firstTitle=_firstTitle;

@end

