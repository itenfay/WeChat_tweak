//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMLiveArchivedResourceFetcherTask
{
    NSString *_unarchiveDestinationPath;
    NSString *_manifestPath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *manifestPath; // @synthesize manifestPath=_manifestPath;
@property(retain, nonatomic) NSString *unarchiveDestinationPath; // @synthesize unarchiveDestinationPath=_unarchiveDestinationPath;
- (id)pinnedPaths;
- (id)initWithResourceUri:(id)arg1 cachingPath:(id)arg2 unarchiveDestinationPath:(id)arg3;

@end

