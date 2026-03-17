//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAWebVCProxy : NSObject
{
}

+ (void)tryJumpWeAppOrH5:(id)arg1 H5EntryScene:(id)arg2 animated:(_Bool)arg3;
+ (id)getWAHTMLWebVCWithURL:(id)arg1 extraInfo:(id)arg2;
+ (id)getWebVCByUrl:(id)arg1 presentModal:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

