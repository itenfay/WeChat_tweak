//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MultiMediaExportAssetState
{
}

- (void)transformToNextState;
- (_Bool)tryConvertHevcVideo;
- (_Bool)tryGenMiddleImage;
- (id)getStateName;
- (void)start;

@end

