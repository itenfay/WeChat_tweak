//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderCgiObjectBaseInfoKey : NSObject
{
    NSString *_tid;
    NSString *_extraKey;
}

+ (id)infoKeyWithTid:(id)arg1 extraKey:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *extraKey; // @synthesize extraKey=_extraKey;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
- (id)description;

@end

