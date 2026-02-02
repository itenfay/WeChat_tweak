//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WARemoteDebugPrintItem : NSObject
{
    _Bool _isSendout;
    NSString *_string;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isSendout; // @synthesize isSendout=_isSendout;
@property(retain, nonatomic) NSString *string; // @synthesize string=_string;

@end

