//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MSEMessageMetaDataAppMsgItem : NSObject
{
    unsigned int _fileSize;
    NSString *_toUsername;
    NSString *_title;
    NSString *_contentUrl;
    NSString *_thumbUrl;
    NSString *_fileName;
    NSString *_fileMd5;
}

+ (void)initialize;
+ (void)PBArrayAdd_fileMd5;
+ (void)PBArrayAdd_fileSize;
+ (void)PBArrayAdd_fileName;
+ (void)PBArrayAdd_thumbUrl;
+ (void)PBArrayAdd_contentUrl;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_toUsername;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *fileMd5; // @synthesize fileMd5=_fileMd5;
@property(nonatomic) unsigned int fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(retain, nonatomic) NSString *contentUrl; // @synthesize contentUrl=_contentUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *toUsername; // @synthesize toUsername=_toUsername;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

