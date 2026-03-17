//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@class NSString;

@interface GameVideoGalleryShareMenuViewController2 : NSObject
{
    CDUnknownBlockType _clickItemBlock;
}

- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)show:(id)arg1;
- (id)initWithClickItemBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
