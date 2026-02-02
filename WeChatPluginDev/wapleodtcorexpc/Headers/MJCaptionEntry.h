//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MJCaptionEntry : NSObject
{
    NSString *_launguage;
    NSArray *_captionItems;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *captionItems; // @synthesize captionItems=_captionItems;
@property(readonly, nonatomic) NSString *launguage; // @synthesize launguage=_launguage;
- (id)description;
- (id)copyWithSpeedRatio:(double)arg1 parentStartTime:(CDStruct_1b6d18a9)arg2;
- (id)initWithLaunguage:(id)arg1 captionItems:(id)arg2;

@end

