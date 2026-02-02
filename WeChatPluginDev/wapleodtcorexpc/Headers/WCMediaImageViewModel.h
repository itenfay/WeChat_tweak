//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCMomentsPageContext;

@interface WCMediaImageViewModel : NSObject
{
    WCMomentsPageContext *_pageContext;
}

+ (id)viewModelWithMMImage:(id)arg1;
+ (id)viewModelWithMediaItem:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCMomentsPageContext *pageContext; // @synthesize pageContext=_pageContext;
- (void)fillExtraDataInImageMaterial:(id)arg1;
@property(readonly, nonatomic) _Bool isLivePhoto;

@end

