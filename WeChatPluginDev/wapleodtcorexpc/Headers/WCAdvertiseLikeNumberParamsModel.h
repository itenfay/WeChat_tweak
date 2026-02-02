//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdvertiseLikeNumberParamsModel : NSObject
{
    NSString *_numberRequestId;
    NSString *_numberDefaultTitle;
    NSString *_numberDesc;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *numberDesc; // @synthesize numberDesc=_numberDesc;
@property(retain, nonatomic) NSString *numberDefaultTitle; // @synthesize numberDefaultTitle=_numberDefaultTitle;
@property(retain, nonatomic) NSString *numberRequestId; // @synthesize numberRequestId=_numberRequestId;

@end

