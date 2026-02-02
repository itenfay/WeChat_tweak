//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface WCFileBrowserToolBarViewModel : NSObject
{
    NSMutableArray *_fileInfos;
    CDUnknownBlockType _onDataChanged;
    unsigned long long _type;
    NSMutableDictionary *_fileInfoDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *fileInfoDict; // @synthesize fileInfoDict=_fileInfoDict;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) CDUnknownBlockType onDataChanged; // @synthesize onDataChanged=_onDataChanged;
@property(retain, nonatomic) NSMutableArray *fileInfos; // @synthesize fileInfos=_fileInfos;
- (id)fileInfoSetForType:(unsigned long long)arg1;
@property(readonly, nonatomic) NSString *sendButtonTitle;
- (unsigned int)fileCountForDataType:(unsigned long long)arg1;
- (void)removeFile:(id)arg1 dataType:(unsigned long long)arg2 notify:(_Bool)arg3;
- (void)removeFile:(id)arg1 dataType:(unsigned long long)arg2;
- (int)addFile:(id)arg1 dataType:(unsigned long long)arg2;
- (unsigned long long)dataTypeForFileInfo:(id)arg1;
- (id)fileInfosForDataType:(unsigned long long)arg1;
- (id)initWithType:(unsigned long long)arg1;

@end

