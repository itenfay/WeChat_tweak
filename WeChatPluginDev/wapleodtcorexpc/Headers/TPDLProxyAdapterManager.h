//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol TPDLProxyAdapterDelegate;

@interface TPDLProxyAdapterManager : NSObject
{
    id <TPDLProxyAdapterDelegate> mAdapter;
}

+ (id)getInstance;
- (void).cxx_destruct;
- (long long)getOfflineRecordDurationWithVid:(id)arg1 format:(id)arg2;
- (id)getOfflineRecordVinfo:(id)arg1 withFormat:(id)arg2;
- (void)setAdapter:(id)arg1;
- (id)init;

@end

