//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol FaceRecogBindVideoLogicDelegate;

@interface FaceRecogBindVideoLogic
{
    id <FaceRecogBindVideoLogicDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FaceRecogBindVideoLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleBindVideo:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)startBindVideo:(id)arg1 bioId:(unsigned long long)arg2 videoFileId:(id)arg3 videoAesKey:(id)arg4;

@end

