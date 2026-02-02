//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface CAttach : NSObject
{
    unsigned int m_uiFileType;
    NSMutableArray *m_arrFileList;
    NSString *m_nsAttachID;
    _Bool isCanPreview;
    _Bool _isBigAttach;
    unsigned int size;
    NSString *name;
    NSString *path;
    NSString *_downloadUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *downloadUrl; // @synthesize downloadUrl=_downloadUrl;
@property(nonatomic) _Bool isBigAttach; // @synthesize isBigAttach=_isBigAttach;
@property(retain, nonatomic) NSString *m_nsAttachID; // @synthesize m_nsAttachID;
@property(retain, nonatomic) NSMutableArray *m_arrFileList; // @synthesize m_arrFileList;
@property(nonatomic) unsigned int m_uiFileType; // @synthesize m_uiFileType;
@property(nonatomic) unsigned int size; // @synthesize size;
@property(nonatomic) _Bool isCanPreview; // @synthesize isCanPreview;
@property(retain, nonatomic) NSString *path; // @synthesize path;
@property(retain, nonatomic) NSString *name; // @synthesize name;
- (id)GetAttachIDFromPath;
- (id)GetAttachTempPath:(id)arg1;
- (id)GetAttachPath:(id)arg1;
- (unsigned int)GetPreviewType;
- (id)GetAttachPic;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

