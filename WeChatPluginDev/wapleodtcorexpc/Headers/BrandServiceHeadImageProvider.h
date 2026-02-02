//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface BrandServiceHeadImageProvider : NSObject
{
    NSMutableDictionary *m_headImageCache;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)onMemoryWarnning;
- (void)onModifyContactHeadImage:(id)arg1;
- (void)onModifyContact:(id)arg1;

@end

