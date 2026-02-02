//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol MMImageDetectUploaderDelegate;

@interface MMImageDetectUploader : NSObject
{
    id <MMImageDetectUploaderDelegate> _delegate;
    NSMutableDictionary *_clientMsgID2ContextMap;
    NSMutableDictionary *_clientMsgID2DetectMediaInfoMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *clientMsgID2DetectMediaInfoMap; // @synthesize clientMsgID2DetectMediaInfoMap=_clientMsgID2DetectMediaInfoMap;
@property(retain, nonatomic) NSMutableDictionary *clientMsgID2ContextMap; // @synthesize clientMsgID2ContextMap=_clientMsgID2ContextMap;
@property(nonatomic) __weak id <MMImageDetectUploaderDelegate> delegate; // @synthesize delegate=_delegate;
- (id)genCdnMediaInfoWithDetectMediaInfo:(id)arg1;
- (void)OnCdnUpload:(id)arg1;
- (void)cdnMgrUploadContext:(id)arg1 detectMediaInfo:(id)arg2;
- (void)notifyUplodFinish:(unsigned int)arg1 context:(id)arg2 detectMediaInfo:(id)arg3;
- (void)removeAllContexts;
- (id)getValidImagePath:(id)arg1;
- (void)startUploadImage:(id)arg1;
- (id)init;

@end

