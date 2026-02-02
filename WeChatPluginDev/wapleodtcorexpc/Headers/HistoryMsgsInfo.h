//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface HistoryMsgsInfo : NSObject
{
    _Bool _isInviter;
    unsigned int _fileLength;
    unsigned int _msgCount;
    unsigned int _fileLengthNew;
    unsigned int _msgCountNew;
    NSString *_fromUsername;
    unsigned long long _historyId;
    NSString *_linkName;
    NSString *_titleName;
    NSString *_linkContent;
    NSString *_fileId;
    NSString *_aeskey;
    NSString *_fileMd5;
    NSString *_titleNameNew;
    NSString *_linkContentNew;
    NSString *_fileIdNew;
    NSString *_aeskeyNew;
    NSString *_fileMd5New;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int msgCountNew; // @synthesize msgCountNew=_msgCountNew;
@property(nonatomic) unsigned int fileLengthNew; // @synthesize fileLengthNew=_fileLengthNew;
@property(retain, nonatomic) NSString *fileMd5New; // @synthesize fileMd5New=_fileMd5New;
@property(retain, nonatomic) NSString *aeskeyNew; // @synthesize aeskeyNew=_aeskeyNew;
@property(retain, nonatomic) NSString *fileIdNew; // @synthesize fileIdNew=_fileIdNew;
@property(retain, nonatomic) NSString *linkContentNew; // @synthesize linkContentNew=_linkContentNew;
@property(retain, nonatomic) NSString *titleNameNew; // @synthesize titleNameNew=_titleNameNew;
@property(nonatomic) unsigned int msgCount; // @synthesize msgCount=_msgCount;
@property(nonatomic) unsigned int fileLength; // @synthesize fileLength=_fileLength;
@property(retain, nonatomic) NSString *fileMd5; // @synthesize fileMd5=_fileMd5;
@property(retain, nonatomic) NSString *aeskey; // @synthesize aeskey=_aeskey;
@property(retain, nonatomic) NSString *fileId; // @synthesize fileId=_fileId;
@property(retain, nonatomic) NSString *linkContent; // @synthesize linkContent=_linkContent;
@property(retain, nonatomic) NSString *titleName; // @synthesize titleName=_titleName;
@property(retain, nonatomic) NSString *linkName; // @synthesize linkName=_linkName;
@property(nonatomic) unsigned long long historyId; // @synthesize historyId=_historyId;
@property(nonatomic) _Bool isInviter; // @synthesize isInviter=_isInviter;
@property(retain, nonatomic) NSString *fromUsername; // @synthesize fromUsername=_fromUsername;
- (_Bool)haveBothFileID;
- (_Bool)justHaveNewFileID;
- (_Bool)justHaveOldFileID;
- (_Bool)dontHaveFileID;
- (void)disableOldHistoryInfo;
- (_Bool)isValidate;
- (void)parseNewLinkNode:(struct XmlReaderNode_t *)arg1;
- (void)parseLinkNode:(struct XmlReaderNode_t *)arg1;
- (id)initWithLinkNode:(struct XmlReaderNode_t *)arg1 linkName:(id)arg2 type:(id)arg3;

@end

