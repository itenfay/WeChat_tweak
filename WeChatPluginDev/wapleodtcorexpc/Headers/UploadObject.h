//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

#import "NSObject-Protocol.h"

@class FileFragment, NSString, UploadElement;

@interface UploadObject : NSObject <NSObject>
{
    FileFragment *_m_filefragment;
    UploadElement *_m_uploadElement;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UploadElement *m_uploadElement; // @synthesize m_uploadElement=_m_uploadElement;
@property(retain, nonatomic) FileFragment *m_filefragment; // @synthesize m_filefragment=_m_filefragment;
- (id)initWithUploadElement:(id)arg1 fileFragment:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

