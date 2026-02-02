//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WANearByPreViewItem
{
    unsigned int _appVersion;
    unsigned int _debugMode;
    NSString *_userName;
    NSString *_previewNickName;
    NSString *_headImageUrlString;
    NSString *_path;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int debugMode; // @synthesize debugMode=_debugMode;
@property(nonatomic) unsigned int appVersion; // @synthesize appVersion=_appVersion;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *headImageUrlString; // @synthesize headImageUrlString=_headImageUrlString;
@property(copy, nonatomic) NSString *previewNickName; // @synthesize previewNickName=_previewNickName;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;

@end

