//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MJComposingPanelViewModel : NSObject
{
    _Bool _respondsToQuickExit;
    unsigned long long _panelType;
}

@property(readonly, nonatomic) _Bool respondsToQuickExit; // @synthesize respondsToQuickExit=_respondsToQuickExit;
@property(readonly, nonatomic) unsigned long long panelType; // @synthesize panelType=_panelType;
- (void)handleApplicationWillEnterForeground:(id)arg1;
- (void)handleApplicationDidEnterBackground:(id)arg1;
- (id)description;
- (id)initWithPanelType:(unsigned long long)arg1 respondsToQuickExit:(_Bool)arg2;

@end

