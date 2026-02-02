//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class LensIcon, NSString;

@interface EmoticonLensIconTask
{
    LensIcon *_iconInfo;
    NSString *_lensId;
    NSString *_targetPath;
    NSString *_tempPath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *tempPath; // @synthesize tempPath=_tempPath;
@property(retain, nonatomic) NSString *targetPath; // @synthesize targetPath=_targetPath;
@property(retain, nonatomic) NSString *lensId; // @synthesize lensId=_lensId;
@property(retain, nonatomic) LensIcon *iconInfo; // @synthesize iconInfo=_iconInfo;

@end

