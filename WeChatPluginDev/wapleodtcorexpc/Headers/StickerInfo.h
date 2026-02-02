//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface StickerInfo : NSObject
{
    _Bool _isProcessed;
    NSString *_path;
    NSString *_md5;
    NSString *_title;
    NSNumber *_len;
    NSNumber *_active;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isProcessed; // @synthesize isProcessed=_isProcessed;
@property(retain, nonatomic) NSNumber *active; // @synthesize active=_active;
@property(retain, nonatomic) NSNumber *len; // @synthesize len=_len;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
- (_Bool)isActiveValid;
- (id)getDic;
- (id)initWithParam:(id)arg1;

@end

