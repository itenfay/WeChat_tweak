//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSOperation.h>

@class WCFileBrowseInfoDB;

@interface WCFileBrowseBuildIndexOperation : NSOperation
{
    WCFileBrowseInfoDB *_browseInfoDB;
    CDUnknownBlockType _buildIndexCompletion;
}

- (void).cxx_destruct;
@property(copy) CDUnknownBlockType buildIndexCompletion; // @synthesize buildIndexCompletion=_buildIndexCompletion;
@property(retain, nonatomic) WCFileBrowseInfoDB *browseInfoDB; // @synthesize browseInfoDB=_browseInfoDB;
- (void)p_buildFileBrowseWithDataInfo:(id)arg1 withType:(unsigned long long)arg2;
- (id)p_getTaskInfo;
- (void)buildAllFileIntoFileBrowse;
- (void)start;
- (id)initWithCompletion:(CDUnknownBlockType)arg1;

@end

