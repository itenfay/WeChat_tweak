//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MsgFileDetailLogicController, NSString;

@interface TingLocalPlayer
{
    NSString *_filePath;
    MsgFileDetailLogicController *_msgFileLogicController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MsgFileDetailLogicController *msgFileLogicController; // @synthesize msgFileLogicController=_msgFileLogicController;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (_Bool)isPlayRateSupported;
- (id)audioInfo;

@end

