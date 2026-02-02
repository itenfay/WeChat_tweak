//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@interface WAGameLiveExitNoteHalfScreenViewController
{
    CDUnknownBlockType _confirmBlock;
}

@property(copy, nonatomic) CDUnknownBlockType confirmBlock; // @synthesize confirmBlock=_confirmBlock;
- (void)confirm;
- (void)viewDidLoad;
- (id)init:(CDUnknownBlockType)arg1;

@end
