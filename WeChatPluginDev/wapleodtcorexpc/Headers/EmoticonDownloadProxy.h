//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol EmoticonDownloadProxyDelegate;

@interface EmoticonDownloadProxy : NSObject
{
    _Bool _needNotifyPartLen;
    id <EmoticonDownloadProxyDelegate> _delegate;
    NSObject *_m_userInfo;
    NSString *_m_filePath;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needNotifyPartLen; // @synthesize needNotifyPartLen=_needNotifyPartLen;
@property(retain, nonatomic) NSString *m_filePath; // @synthesize m_filePath=_m_filePath;
@property(retain, nonatomic) NSObject *m_userInfo; // @synthesize m_userInfo=_m_userInfo;
@property(nonatomic) __weak id <EmoticonDownloadProxyDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isActive;
- (void)startRequest;
- (id)initWithMd5:(id)arg1;

@end

