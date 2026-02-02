//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface TingCdnImageUploadManager : NSObject
{
    NSMutableDictionary *_uploadingMetaDict;
    NSMutableArray *_uploadWaitingArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *uploadWaitingArray; // @synthesize uploadWaitingArray=_uploadWaitingArray;
@property(retain, nonatomic) NSMutableDictionary *uploadingMetaDict; // @synthesize uploadingMetaDict=_uploadingMetaDict;
- (void)OnCdnUpload:(id)arg1;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)doCdnImageUploadWithMeta:(id)arg1;
- (void)checkQueue;
- (void)startUploadImagePath:(id)arg1 complection:(CDUnknownBlockType)arg2;
- (void)registerExt;
- (id)init;

@end

