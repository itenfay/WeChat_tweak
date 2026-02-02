//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface QGPReturn : NSObject
{
    NSString *_status;
}

+ (id)successWithoutReturn;
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
- (id)init;

@end

