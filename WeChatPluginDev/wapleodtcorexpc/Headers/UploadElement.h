//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface UploadElement : NSObject
{
    NSMutableDictionary *_m_fileInfos;
    NSString *_m_commextrainfo;
    NSString *_m_userName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_userName; // @synthesize m_userName=_m_userName;
@property(retain, nonatomic) NSString *m_commextrainfo; // @synthesize m_commextrainfo=_m_commextrainfo;
@property(retain, nonatomic) NSMutableDictionary *m_fileInfos; // @synthesize m_fileInfos=_m_fileInfos;
- (_Bool)addFile:(id)arg1 startPos:(unsigned long long)arg2 endPos:(unsigned long long)arg3;
- (_Bool)addFile:(id)arg1 size:(unsigned long long)arg2;
- (id)init;

@end

