#import <CareKit/CareKit.h>
#import <CloudMine/CloudMine.h>

@interface OCKCarePlanActivity (CMHealth)<CMCoding>

- (BOOL)isDataEquivalentOf:(OCKCarePlanActivity *_Nullable)other;

@end

@interface OCKCareSchedule (CMHealth)<CMCoding>
@end
