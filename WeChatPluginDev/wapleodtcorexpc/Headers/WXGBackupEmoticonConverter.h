//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface WXGBackupEmoticonConverter : NSObject
{
    NSMutableDictionary *m_md5ConverterDic;
}

- (void).cxx_destruct;
- (void)convertEmoticonMessageWrap:(id)arg1;
- (void)initMd5ConverterDic;
- (id)init;

@end

