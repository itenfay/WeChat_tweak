//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSHTTPURLResponse.h>

@interface NSHTTPURLResponse (Extend)
- (id)mm_contentDispositionFileName;
- (_Bool)mm_isContentDispositionAttachment;
- (id)mm_contentDispositionType;
- (unsigned long long)mm_contentLength;
- (id)mm_contentTypeIfHasPrefixApplication;
@property(readonly, nonatomic) unsigned long long qmapFlowSize;
@end

