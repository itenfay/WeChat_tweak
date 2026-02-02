//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface QMapLoggerLite : NSObject
{
    _Bool _status;
    NSString *_text;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) _Bool status; // @synthesize status=_status;

@end

