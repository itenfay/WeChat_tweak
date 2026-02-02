//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCFinderTemplatePublishParams;

@interface WCFinderTemplateBindData : NSObject
{
    _Bool _isOnlyPreview;
    WCFinderTemplatePublishParams *_params;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isOnlyPreview; // @synthesize isOnlyPreview=_isOnlyPreview;
@property(retain, nonatomic) WCFinderTemplatePublishParams *params; // @synthesize params=_params;

@end

