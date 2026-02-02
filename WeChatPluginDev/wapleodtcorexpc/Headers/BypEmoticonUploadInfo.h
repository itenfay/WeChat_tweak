//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMessageWrap, NSString;

@interface BypEmoticonUploadInfo : NSObject
{
    unsigned int totalLen;
    NSString *md5;
    CMessageWrap *wrapMsg;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CMessageWrap *wrapMsg; // @synthesize wrapMsg;
@property(nonatomic) unsigned int totalLen; // @synthesize totalLen;
@property(retain, nonatomic) NSString *md5; // @synthesize md5;
- (id)description;
- (id)init;

@end

