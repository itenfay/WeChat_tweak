//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface GameHaowanMediaInfo
{
    unsigned int _mediaType;
    unsigned int _editFlag;
    NSString *_localId;
    NSString *_localPath;
    unsigned long long _fileSize;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int editFlag; // @synthesize editFlag=_editFlag;
@property(nonatomic) unsigned int mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) NSString *localPath; // @synthesize localPath=_localPath;
@property(retain, nonatomic) NSString *localId; // @synthesize localId=_localId;
- (id)generateFileKey;
- (id)createDbItem:(id)arg1;

@end

