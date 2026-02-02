//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface GroupNoticeUtil : NSObject
{
}

+ (id)ConvertData2Item:(id)arg1;
+ (id)ConvertData2MsgWrap:(id)arg1;
+ (id)dataFromHexString:(id)arg1;
+ (id)genUniqueKey;
+ (id)getTmpPathWithChatName:(id)arg1 sourceId:(id)arg2 fileName:(id)arg3 isThumb:(_Bool)arg4 dataFmt:(id)arg5;
+ (id)getTmpDirWithChatName:(id)arg1 sourceId:(id)arg2;
+ (id)getTmpDirWithChatName:(id)arg1;
+ (id)getTmpDir;
+ (id)getDataPathWithChatName:(id)arg1 localId:(unsigned int)arg2 fileName:(id)arg3 isThumb:(_Bool)arg4 dataFmt:(id)arg5;
+ (id)getDataDirWithChatName:(id)arg1 localId:(unsigned int)arg2;
+ (id)getDataDirWithChatName:(id)arg1;
+ (id)getDataDir;
+ (id)getUserRootDir;

@end

